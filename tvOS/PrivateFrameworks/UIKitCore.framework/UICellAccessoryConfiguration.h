//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UICellAccessoryConfiguration : NSObject
{
    _Bool _leadingAlwaysNeedsLayout;
    _Bool _trailingAlwaysNeedsLayout;
    NSArray *_leadingAccessories;
    NSArray *_trailingAccessories;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *trailingAccessories; // @synthesize trailingAccessories=_trailingAccessories;
@property(copy, nonatomic) NSArray *leadingAccessories; // @synthesize leadingAccessories=_leadingAccessories;
- (_Bool)alwaysNeedsLayout;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

