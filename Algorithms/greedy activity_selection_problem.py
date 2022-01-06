n = int(input('Enter the number of activities: '))
starting_time = input('Enter the starting time of %d activities in order: ' % n)
starting_time = [int(i) for i in starting_time]
finishing_time = input('Enter the finishing time of %d activities in order: ' % n)
finishing_time = [int(i) for i in finishing_time]

selected_activity = []
last_selected_activity = 0
for i in range(n):
    if starting_time[i] >= finishing_time[last_selected_activity]:
        selected_activity.append(i)
        last_selected_activity = i

print('Selected activities: ', end="")
for i in selected_activity:
    print(i, end=' ')
