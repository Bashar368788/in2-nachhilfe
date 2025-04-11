## Git, GitHub, and GitLab

### 🧠 What is Git?

Git is a **version control system**. It helps you **track changes** to your code over time, **revert to earlier versions**, and **collaborate** with others—*all locally*.

> Think of Git as a powerful **time machine** for your codebase.

✅ Git is **installed on your computer** and it works locally.  
❌ Git does **not** automatically sync your code to the cloud or with other people.

---

### ☁️ What are GitHub and GitLab?

Git by itself only lives on your machine. To **share your code** with others, **collaborate**, and **back up your repositories**, you need platforms like:

- **GitHub** – the most popular Git hosting platform.
- **GitLab** – similar to GitHub but includes built-in CI/CD tools.
- Others include **Bitbucket**, **SourceForge**, etc.

These platforms:
- Store your code in the cloud.
- Allow team collaboration.
- Track issues and merge requests (pull requests in GitHub).
- Provide nice visual interfaces.

---

### 🛠️ Essential Git Commands

Here are some basic Git commands to get you going:

```bash
git init
# Initialize a Git repository in your local folder

git status
# See current changes and staged files

git add <filename>
# Add a file to staging area

git commit -m "your message"
# Commit staged changes with a message

git log
# Show commit history

git remote add origin <repo-url>
# Connect your local repo to a remote (GitHub/GitLab)

git push -u origin main
# Push your code to the remote repository (first time)

git pull
# Pull latest changes from the remote
```

---

### 🌿 Git Branching Explained

Branching allows you to create a **copy** of your codebase to work on features or fixes without touching the main code.

```bash
git branch feature-x
# Create a new branch

git checkout feature-x
# Switch to that branch

git checkout -b feature-x
# Create and switch in one command

git merge feature-x
# Merge changes into current branch

git branch -d feature-x
# Delete the branch after merging
```

---

### 🔁 Branching Visualization

Let’s visualize a simple flow:

```
main
  |
  o---o---o---o------------------> main
           \     
            o---o--> feature-1
```

1. `main` is your stable code.
2. You create `feature-1` to try new stuff.
3. Once tested, merge `feature-1` back to `main`.

---

### 📌 Summary

| Tool     | Purpose                                  |
|----------|------------------------------------------|
| Git      | Version control (local)                  |
| GitHub   | Cloud-hosted Git repository, UI, tools   |
| GitLab   | Similar to GitHub, with CI/CD features   |

