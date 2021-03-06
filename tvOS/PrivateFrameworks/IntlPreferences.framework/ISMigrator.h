//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ISMigrator : NSObject
{
    unsigned long long _platform;
    NSString *_previousVersion;
    NSString *_currentVersion;
    unsigned long long _previousSchemaVersion;
}

+ (id)migratorFromSchemaVersion:(unsigned long long)arg1;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2;
+ (unsigned long long)currentPlatform;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long previousSchemaVersion; // @synthesize previousSchemaVersion=_previousSchemaVersion;
@property(copy, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(copy, nonatomic) NSString *previousVersion; // @synthesize previousVersion=_previousVersion;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
- (_Bool)previousVersionIsOlderThanMacOS:(id)arg1 iOS:(id)arg2 watchOS:(id)arg3 tvOS:(id)arg4;
- (id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2;
- (id)performMigrationForPreferences:(id)arg1;

@end

