# cpr-tool

Консольная утилита на C++ для отправки HTTP-запросов через библиотеку [CPR](https://github.com/libcpr/cpr).

## Возможности

- **GET-запрос** — получить статус-код сайта
- **POST-запрос** — отправить фиксированное сообщение
- **Custom POST** — отправить своё сообщение
- **Text request** — получить тело ответа (HTML/JSON)
- **Exit** — выход из программы

## Требования

- C++17 или выше
- Компилятор: `g++` / `clang++` / MSVC
- Библиотека [CPR](https://github.com/libcpr/cpr)
- libcurl (идёт в зависимостях CPR)

## Установка зависимостей

### Ubuntu / Debian
```bash
sudo apt install g++ libcpr-dev
```

### Arch / Manjaro
```bash
sudo pacman -S gcc cpr
```

### Windows (MSYS2 UCRT64)
```bash
pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-cpr
```

### macOS (Homebrew)
```bash
brew install cpr
```

## Сборка

```bash
g++ main.cpp -o cpr-tool -lcpr -lcurl
```

На Windows:
```bash
g++ main.cpp -o cpr-tool.exe -lcpr -lcurl
```

## Запуск

```bash
./cpr-tool
```

На Windows:
```bash
cpr-tool.exe
```

## Использование

После запуска откроется меню:

```
Welcome to my cpr tool!
1. Get request
2. Post request
3. Custom post
4. Text request
5. Exit
```

Выбери пункт, введи URL — программа выполнит запрос и покажет результат.

### Примеры URL для теста

- `https://httpbin.org/get` — вернёт твой GET-запрос обратно
- `https://httpbin.org/post` — вернёт твой POST-запрос обратно
- `https://api.github.com/users/torvalds` — инфо о пользователе GitHub
- `https://example.com` — простой сайт

## Структура проекта

```
cpr-tool/
├── main.cpp      # весь код программы
└── README.md     # этот файл
```

