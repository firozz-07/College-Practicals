from openpyxl import workbook
from openpyxl.styles import font,PatternFill,borders,Side,alignment
from openpyxl.drawing.image import Image
from openpyxl.chart import bar_chart,reference
from openpyxl.worksheet.table import Table,TableStyleInfo
wb=workbook()
ws=wb.active
ws.title="student data"
data=[
    ["name","math","science","english"],
    ["rahul",80,70,60],
    ["uzaifa",70,30,60],
    ["Samarth",89,72,100],
    ["firoz",19,52,80]
]
for row in data:
    ws.append(row)
ws.freeze_panes="B2"
tab=Table(displayName=)