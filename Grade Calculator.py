def add_grade(Grades):
    Name_of_the_Assignment = input("Assignment: ")
    Grade = int(input("Enter the grade: "))
    Weightage = int(input(("Enter the weightage: ")))
    Grades.append((Name_of_the_Assignment, Grade, Weightage))

def calculate_weighted_average(Grades):
    total = 0
    total_weight = 0
    for i in Grades:
        total += (i[1]/100)*i[2]
        total_weight += i[2]

    return (total / total_weight) * 100 

def main():
    Grades = []
    for i in range(3):
        add_grade(Grades)
    if input("Do you want to add more grades? (yes/no): ").lower() == 'yes':
        while True:
            add_grade(Grades)
            if input("Do you want to add another grade? (yes/no): ").lower() != 'yes':
                break

    print("Weighted Average:", calculate_weighted_average(Grades))

if __name__ == "__main__":
    main()
