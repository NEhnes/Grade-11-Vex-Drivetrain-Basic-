This is the default drivetrain code posted fom Bradshaw's OneNote

YOU HAVE TO CHANGE YOUR PORTS

In robotconfig.h:

Change ports to whichever ones your drivetrain uses (Line 13-17)


YOU MAY ALSO NEED TO CHANGE MOTOR DIRECTION

In that same section of code in robotconfig.h:

The third paramater of motor() is a boolean variable, this determines spin direction. false is reverse
