//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPCharacteristic, NSArray;

@protocol HAPAccessoryServerInternalDelegate <NSObject>

@optional
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValueForCharacteristic:(HAPCharacteristic *)arg2;
- (NSArray *)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(HAPAccessoryServer *)arg1;
@end

