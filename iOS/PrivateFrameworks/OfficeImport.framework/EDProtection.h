//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface EDProtection : NSObject <NSCopying>
{
    _Bool mHidden;
    _Bool mLocked;
}

+ (id)protectionWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (id)description;
- (_Bool)isLocked;
- (_Bool)isHidden;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToProtection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (id)init;

@end

