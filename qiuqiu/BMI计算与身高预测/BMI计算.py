hight = float(input("以米为单位,请输入身高:"))
kg = float(input("以千克为单位,请输入体重:"))
BMI = float(kg/pow(hight, 2))
print("BMI值为:",BMI)
if(BMI<18.5):
    print("偏瘦")
elif(BMI<24.0): 
    print("正常")
elif(BMI<=27.0):
    print("偏胖")
elif(BMI <= 30.0):
    print("肥胖")
else:
    print("重度肥胖")
