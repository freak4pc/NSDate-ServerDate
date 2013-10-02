NSDate+ServerDate
================

NSDate+ServerDate is a NSDate Category that allows you to make sure your time is synced up to a remote server regardless of the User's local settings.
 
It does this by performing a one-time-per-session HTTP HEAD Request to the supplied server, getting a "Base" date, and keep counting from there - Making sure you're in sync with the remote server even when the user's clock isn't.
 
# Definitions
Modify ***_SD_SERVER*** If you wish to sync your time wish a specific server (e.g. your API server).
 
Modify ***_SD_FORMAT*** If for some reason the Date format your HTTP Server returns is different than the one specified.
 
USAGE
-----
```objc
NSDate *serverDate = [NSDate serverDate];
```

An example Xcode project is part of this Repository.

LICENSE
-------------------

Copyright (C) 2013 Developed by Shai Mishali

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.