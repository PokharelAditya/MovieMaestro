# MovieMaestro

I Year / II Semester project — a desktop movie recommendation system built with Qt (C++) and SQLite.

## Overview

MovieMaestro is a login-based movie browsing and recommendation app with separate admin and user roles. Users get a personalized "For You" feed based on their genre preferences, ratings, and viewing history, alongside latest releases and top-rated titles.

## Features

**Authentication**
- User login/signup with profile pictures
- Separate admin panel for managing the movie catalog

**Admin**
- Add, update, and manage movies, casts, directors, and genres (`addmovies`, `updatemovies`, `admin`, `adminoptions`)

**User experience**
- Personalized recommendations based on:
  - Selected genre preferences (Horror, Action, Thriller, Romance, Comedy, Crime, Drama, Sci-Fi, History, Suspense)
  - Highly-rated movies, cross-referenced by shared directors and cast members
- Latest releases feed, sorted by release date
- Top-rated movies feed
- Movie detail view with poster, description, duration, cast, director, and genres
- 5-star rating system per user, per movie
- Search functionality
- User settings and profile management (`usersetting`)
- Light/dark mode support (theme toggle icons for house, gear, search, star)

## Tech Stack

- **Language:** C++
- **Framework:** Qt (Widgets, `.ui` forms via Qt Designer)
- **Database:** SQLite (`Movies.db`), accessed via `QSqlDatabase` / `QSqlQuery`
- **Build system:** qmake (`MovieMaestro.pro`)

## Project Structure

| File/Folder | Purpose |
|---|---|
| `main.cpp` | Application entry point |
| `mainwindow.*` | Main application window |
| `homepage.*` | Core homepage logic — recommendations, latest releases, top rated, movie details |
| `admin.*`, `adminoptions.*` | Admin login and management panel |
| `addmovies.*`, `updatemovies.*` | Add/edit movie records |
| `user.*` | User account model/logic |
| `usersetting.*` | User profile and settings |
| `database.h`, `Databasemanager.h` | SQLite database connection and query handling |
| `Movies.db` | SQLite database file |
| `*.png`, `*.jpg` | UI icons and assets |

## Running it

1. Open `MovieMaestro.pro` in Qt Creator
2. Configure with a Qt kit that includes the `Sql` module
3. Build and run

## Notes

Built as an early university project — some queries and logic are written in a straightforward/brute-force style (e.g. manual sorting loops) rather than optimized SQL, reflecting where things stood at the time.
