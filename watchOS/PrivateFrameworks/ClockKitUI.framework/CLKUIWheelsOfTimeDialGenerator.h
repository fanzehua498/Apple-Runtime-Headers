//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLKUIWheelsOfTimeDialGenerator : NSObject
{
}

+ (id)imageForType:(unsigned int)arg1 style:(unsigned int)arg2 forDevice:(id)arg3;
+ (void)createAndSaveAllWOTImages:(id)arg1 forDevice:(id)arg2;
+ (void)saveImage:(id)arg1 toPath:(id)arg2 forDevice:(id)arg3;
+ (id)_create24HourWOTImage:(unsigned int)arg1 forDevice:(id)arg2;
+ (id)_create12HourWOTImage:(unsigned int)arg1 forDevice:(id)arg2;
+ (id)_createMinutesWOTImage:(unsigned int)arg1 forDevice:(id)arg2;
+ (id)_createWOTDialImageForType:(unsigned int)arg1 style:(unsigned int)arg2 digitStrings:(id)arg3 xPositions:(float *)arg4 forDevice:(id)arg5;
+ (void)_drawDialText:(id)arg1 baselinePositions:(float *)arg2 xPositions:(float *)arg3 kernValue:(float)arg4 forDevice:(id)arg5;
+ (float)_dialTextKernValue:(unsigned int)arg1 forDevice:(id)arg2;
+ (id)_tickImageForType:(unsigned int)arg1 style:(unsigned int)arg2 forDevice:(id)arg3;
+ (id)_generateImage:(id)arg1 thinTickImage:(id)arg2 forDevice:(id)arg3;
+ (id)_dialTextFontForDevice:(id)arg1;

@end

