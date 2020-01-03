# cpp
## Advanced Programming

These are some of my codes related to Advanced Programming Course.

At the following you can find the steps needed to create a repository and pushing your projects using **git** and **Visual Studio Code**.

- Create a directory on the local file system.
- Create a repo on Github.
- Select Clone "Clone or download" on Github, copy the link
- In Visual Studio Code, sect File -> Add Folder to Workspace -> Select the newly created directory
- Select Terminal Window, type:
  - git config --global user.name <github userID>
  - git clone <URL from github link copied earlier>
    - for example for this repo: 
    * git config --global user.name mamintoosi
    * git clone https://github.com/mamintoosi/cpp.git
- File/Open Folder, open cpp folder and create a new file:
  - CPP [WSL] new file, create helloworld.cpp
- On Terminal, commit and push your changes:
  - git commit -m "First commit"
  - git push -u origin master
    * enter your user and passwords
- Now you have helloworld.cpp on your github repository :)

After that I added this Readme to repository from github web

Some steps are borrowed from:
http://www.notyourdadsit.com/blog/2018/4/3/cheatsheet-setup-github-on-visual-studio-code
