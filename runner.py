import os
from datetime import date, datetime
import subprocess

# from __future__ import print_function

import google.auth
from googleapiclient.discovery import build
from googleapiclient.errors import HttpError
from google.oauth2.credentials import Credentials
from google.auth.transport.requests import Request
from google_auth_oauthlib.flow import InstalledAppFlow


SCOPES = ['https://www.googleapis.com/auth/spreadsheets']
SAMPLE_SPREADSHEET_ID = '1XnY8S4qMsDSLBvGEZoJ92BwVt4Qf_oM4ubsRoE3XY7c'

def get_values(spreadsheet_id, range_name):
    # creds, _ = google.auth.default()
    creds = None
    # The file token.json stores the user's access and refresh tokens, and is
    # created automatically when the authorization flow completes for the first
    # time.
    if os.path.exists('token.json'):
        creds = Credentials.from_authorized_user_file('token.json', SCOPES)
    # If there are no (valid) credentials available, let the user log in.
    if not creds or not creds.valid:
        if creds and creds.expired and creds.refresh_token:
            creds.refresh(Request())
        else:
            flow = InstalledAppFlow.from_client_secrets_file(
                'credentials.json', SCOPES)
            creds = flow.run_local_server(port=0)
        # Save the credentials for the next run
        with open('token.json', 'w') as token:
            token.write(creds.to_json())
    try:
        service = build('sheets', 'v4', credentials=creds)

        result = service.spreadsheets().values().get(
            spreadsheetId=spreadsheet_id, range=range_name).execute()
        rows = result.get('values', [])
        print(f"{len(rows)} rows retrieved")
        return result
    except HttpError as error:
        print(f"An error occurred: {error}")
        return error

def update_values(spreadsheet_id, range_name, value_input_option,
                  insert_data_option, values):
    # creds, _ = google.auth.default()
    # pylint: disable=maybe-no-member
    creds = None
    # The file token.json stores the user's access and refresh tokens, and is
    # created automatically when the authorization flow completes for the first
    # time.
    if os.path.exists('token.json'):
        creds = Credentials.from_authorized_user_file('token.json', SCOPES)
    # If there are no (valid) credentials available, let the user log in.
    if not creds or not creds.valid:
        if creds and creds.expired and creds.refresh_token:
            creds.refresh(Request())
        else:
            flow = InstalledAppFlow.from_client_secrets_file(
                'credentials.json', SCOPES)
            creds = flow.run_local_server(port=0)
        # Save the credentials for the next run
        with open('token.json', 'w') as token:
            token.write(creds.to_json())
    try:

        service = build('sheets', 'v4', credentials=creds)
        body = {
            'values': values
        }
        result = service.spreadsheets().values().append(
            spreadsheetId=spreadsheet_id, range=range_name,
            valueInputOption=value_input_option,
            insertDataOption=insert_data_option, body=body).execute()
        print(f"{result.get('updatedCells')} cells updated.")
        return result
    except HttpError as error:
        print(f"Insertion: An error occurred: {error}")
        return error


def insert_new():
    data = get_values(SAMPLE_SPREADSHEET_ID, 'A:C')
    # print(data)
    data = data['values'][-1]
    current_files = filecounts()
    cbn = current_files - int(data[2])
    new_data = [[str(int(data[0])+1), str(cbn), str(current_files)]]
    print(new_data)
    update_values(SAMPLE_SPREADSHEET_ID, 'A:A', 'USER_ENTERED', 'INSERT_ROWS', new_data)


# def our_dictionary():
#     datetoday = date.today()
#     weekday = datetime.today().weekday()
#     startdate = date(2023, 5, 21)
#     diff = datetoday - startdate
#     print(diff.days)
#     newline = diff.days%7


def filecounts():
    count = 0
    dir_path = '/home/shivam/Programming/IB/'
    # print(os.listdir(dir_path))
    for root_dir, cur_dir, files in os.walk(dir_path):
        # print(files)
        count += len(files)
    return count


def auto_git():
    datetoday = date.today()
    subprocess.call(["git", "pull"])
    subprocess.call(['git', 'add', '.'])
    subprocess.call([f'git', 'commit', '-m', f'{datetoday}'])
    subprocess.call([f'git', 'push'])
    print("Pushed Changes :)")


if __name__ == '__main__':
    insert_new()
    auto_git()