//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSVCardRecord : NSObject
{
    void *_record;
}

@property(readonly, nonatomic) void *record; // @synthesize record=_record;
- (void)dealloc;
- (id)initWithRecord:(void *)arg1;
- (id)initWithVCardRepresentation:(id)arg1;

@end

