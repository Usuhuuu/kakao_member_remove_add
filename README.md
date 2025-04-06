# 카톡 친구 자동 삽입하기 프로그램

## Purpose 

This C program is designed to manage a list of members. Each member has:
- A **name**
- A **number** (manually entered)

It allow to do:
- Add new members
- Display the list of members (sorted from highest to lowest number)
- Search for a member by name
- Delete a member by name

---

## Assigment Main points

The original assignment goal was to **count how many times a member has called**.
However, in this program, I used a **manually entered a intiger typed number** to represent that count.
This count can be considered as a way to track how many times each member was called.

### 1. add members

- The member can be added by entering their name & number.
- The number used to sort them.

### 2. display Members

- Shows all members, **sorted from highest to lowest** based on their number. 

### 3. Search Member

- Search for a member by name.
- If found, the member’s name and number are shown.

### 4. Delete Member

- Delete a member by typing their name.
- If the name is found, it is removed from the list.


---



```
damdinsurenusukhbayar@Usukhbayars-MacBook-Pro 주5 % ./22101191                

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 1
Enter member name: Usuhuu
Enter member number: 1234
Member added successfully.

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 1
Enter member name: Anu
Enter member number: 1233
Member added successfully.

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 2
Members List:
Name: Usuhuu, Number: 1234
Name: Anu, Number: 1233

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 3
Enter member name to search: Anu
Member found: Name: Anu, Number: 1233

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 4
Enter member name to delete: Anu
Member deleted successfully.

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 2
Members List:
Name: Usuhuu, Number: 1234

Menu:
1. Add Member
2. Display Members
3. Search Member
4. Delete Member
5. Exit
Enter your choice: 

```