#pragma once

class Window {
public:
    static Window& instance();

    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

private:
    Window();
};