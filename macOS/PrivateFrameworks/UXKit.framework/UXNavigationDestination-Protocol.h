//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/NSObject-Protocol.h>
#import <UXKit/NSSecureCoding-Protocol.h>

@class NSSet, NSString, UXDestinationAuxiliaryStore;

@protocol UXNavigationDestination <NSObject, NSSecureCoding>
@property(readonly, nonatomic) NSSet *requiredDestinationAuxiliaryKeys;
@property(readonly, nonatomic) UXDestinationAuxiliaryStore *destinationAuxiliaryStore;
@property(readonly, nonatomic) NSString *destinationTitle;
@property(readonly, nonatomic) NSString *destinationIdentifier;
@end

