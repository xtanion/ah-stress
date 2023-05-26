# import datetime
from datetime import date
import subprocess

datetoday = date.today()

subprocess.call(["git", "pull"])
subprocess.call(['git', 'add', '.'])
# subprocess.call([f'git commit -m {datetoday}'])
# subprocess.call(['git whatchanged -1 --format=oneline | wc -l')
# print(filecount)