First Steps
===========

Welcome to the Agreon Library Tutorial. I hope you set up the Library successfull.<br>
Let's start!<br>

The first programm will just create a screen and close it.<br>
The first thing to do is to import the Library and the cGraphics Manager and create a main function.
```
#include "AgreonLibrary/Agreon.h"
#include "AgreonLibrary/cGraphics.h"

int main( int argc, char* args[] )
{
	return 0;
}

```
The whole Library is seperated in Managers, e.g. for Graphics, Sound or Input<br>
Now we can create the Graphics Manager. 

```
cGraphics* Graphics = new cGraphcis();
```

With this manager, we can open a window and draw textures or text.<br>
We will use the init function.

```
// Syntax: init( screen_width, screen_height, window_title, window_icon );
Graphics->init( 800, 600, "Test Program", NULL );
```
You code should look something like this:
```
#include "AgreonLibrary/Agreon.h"
#include "AgreonLibrary/cGraphics.h"

int main( int argc, char* args[] )
{
	cGraphics* Graphics = new cGraphcis();
	Graphics->init( 800, 600, "Test Program", NULL );
	return 0;
}

```

If you run the program it should compile successfull and for a second a window will pop up. <br>
To avoid shutting down of the program we have to add a game loop.<br>
The best thing is to combine it with the Input Manager, so that you can close the program with "Escape".

```
#include "AgreonLibrary/Agreon.h"
#include "AgreonLibrary/cGraphics.h"
#include "AgreonLibrary/cInput.h"

int main( int argc, char* args[] )
{
	// Creating and initializing the Graphics Manager.
	cGraphics* Graphics = new cGraphics();
	// Creating and initializing the Input Manager.
	cInput*	   Input    = new cInput();
	
	// Here we create a window 800x600.
	Graphics->init( 800, 600, "Test Program", NULL );
	
	// An endless lopp
	while( true )
	{
		// The Input Manager gets the Input of your keyboard and mouse.
		Input->handleInput();
		
		// Here we check if the key "Escape" is pressed. 
		// Every key has the prefix SDLK_ .
		if( Input->isKeyPressed( SDLK_ESCAPE )
		{
			// If Escape is pressed we break the loop and the program shuts down.
			break;
		}
	
	}
	
	return 0;
}

```


So, now we can actually start with drawing! It is not as hard as you think.
The first thing to do is to place an image in your project folder.
After that we can call a function named loadTexture after our init function.
```
Graphics->loadTexture( const char* path, string name );" 
```
"path" is the path of your image and the other one is the name to work with later on. You will see.<br>
In our main Loop we call
```
Graphics->drawTexture( name, x, y ); 
```
to draw the texture. You can just use the name of your texture to draw it!

So let's see what our code looks like now.

```

int main( int argc, char* args[] )
{
    // Creating and initializing the Graphics Manager.
    cGraphics* Graphics = new cGraphics();
    // Creating and initializing the Input Manager.
    cInput*     Input    = new cInput();

    // Here we create a window 800x600.
    Graphics->init( 800, 600, "Test Program", NULL );
    
    // Load a texture.
    Graphics->loadTexture( "test.png", "test" );
    
    // An endless lopp
    while( true )
    {
        // The Input Manager gets the Input of your keyboard and mouse.
        Input->handleInput();

        // Here we check if the key 'Escape' is pressed. 
        // Every key has the prefix SDLK_ .
        if( Input->isKeyPressed( SDLK_ESCAPE ) )
        {
            // If Escape is pressed we break the loop and the program shuts down.
            break;
        }
	
	// Draws your texture.
	Graphics->drawTexture( "test", 100, 100 );
    }

    return 0;
}


```

You should now see your texture in the window at the position 100, 100.<br><br>

For more information just look up the [Documentation](http://nosenshi.bplaced.com/files/AgreonLibrary/).






