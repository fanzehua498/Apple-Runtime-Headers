//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserPickerItemModuleOptions : NSObject
{
    _Bool _customLocationSelected;
    HUPresenceCurrentUserLocationDevice *_locationDevice;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool customLocationSelected; // @synthesize customLocationSelected=_customLocationSelected;
@property(readonly, nonatomic) HUPresenceCurrentUserLocationDevice *locationDevice; // @synthesize locationDevice=_locationDevice;
- (id)initWithLocationDevice:(id)arg1 customLocationSelected:(_Bool)arg2;

@end

