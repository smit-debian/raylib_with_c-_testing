#include "window.hpp"
#include "raylib.h"

int main()
{
        Window window(800, 450, "test", 60);

        while( !WindowShouldClose() )
        {
                BeginDrawing();

                ClearBackground(PURPLE);

                EndDrawing();
        }

        return 0;
}
