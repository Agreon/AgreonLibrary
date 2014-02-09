AgreonLibrary
=============

A Library to create Games easy with Visual Studio!

Thank you for downloading the Agreon Library. <br>
I will now show you how to install the Agreon Library.

Requirements
-------------
  - You have to program with Visual Studio 

Installation
-------------

1. Create a Subfolder "AgreonLibrary" in Project and add all .h and .cpp Files to it.


2. Open the Project settings and make changes in the VC++-Verzeichnisse.
	+ Choose the folder "include" in "Includeverzeichnisse".
	+ Choose the folder "lib" in "Bibliotheksverzeichnisse".

3. Add the following list in Linker->Eingabe : <br>
	SDL.lib<br>
	SDLmain.lib<br>
	SDL_image.lib<br>
	SDL_mixer.lib<br>
	opengl32.lib<br>
	glu32.lib<br>
	ftgl_D.lib<br>

4. 	Change System->Subsytem to "Windows(/SUBSYSTEM:WINDOWS)"

5. Copy the files in dll to your main folder And your debug folder <br>
  -> [ProjectName]/Debug/ and [ProjectName]/[ProjectName]/

6. Copy to C/C++->Präpozessor->präprozessordefinitionen : \_CRT\_SECURE_NO_WARNINGS

First Steps
--------

To test if you have done everything correctly just add the following code: <br>
```
#include "AgreonLibrary/Agreon.h"
#include "AgreonLibrary/cGraphics.h

int main( int argc, char[] argv )
{
	cGraphics Graphics = new cGraphics();
	return 0;
}
```
When you run the program nothing should happen.



