//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSImage, NSMutableArray;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CPKEmojiIMSharedResources : NSObject
{
    BOOL _emojiViewOncePrepared;
    BOOL _isDataReady;
    BOOL _isRTLDirection;
    NSBundle *_frameworkBundle;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableArray *_displayingRecents;
    NSMutableArray *_localRecents;
    NSMutableArray *_categoryDataArray;
    NSImage *_recentsImage;
    NSMutableArray *_categoryImages;
}

+ (id)searchButtonImage;
+ (id)createCloseButtonWithWidth:(double)arg1;
+ (BOOL)isUIDirectionRTL;
+ (id)sharedInstance;
+ (Class)CPDataClass;
@property BOOL isRTLDirection; // @synthesize isRTLDirection=_isRTLDirection;
@property BOOL isDataReady; // @synthesize isDataReady=_isDataReady;
@property(retain) NSMutableArray *categoryImages; // @synthesize categoryImages=_categoryImages;
@property(retain) NSImage *recentsImage; // @synthesize recentsImage=_recentsImage;
@property(retain) NSMutableArray *categoryDataArray; // @synthesize categoryDataArray=_categoryDataArray;
@property(retain) NSMutableArray *localRecents; // @synthesize localRecents=_localRecents;
@property(retain) NSMutableArray *displayingRecents; // @synthesize displayingRecents=_displayingRecents;
@property NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property BOOL emojiViewOncePrepared; // @synthesize emojiViewOncePrepared=_emojiViewOncePrepared;
- (void)_didChangedRecentsInCharacterPicker:(id)arg1;
- (id)_emojiPreference;
- (BOOL)_isEmojiString:(id)arg1;
- (void)_saveRecentsWithNewCharacter:(id)arg1;
- (void)_loadSystemRecentsWithFilling:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_waitForinitialization;
- (id)imageNamed:(id)arg1;
- (id)localizedString:(id)arg1;
- (void)didSelectedCharacter:(id)arg1;
- (BOOL)hasSelectedSkinToneForCharacter:(id)arg1;
- (id)skinTonedCharacterForCharacter:(id)arg1;
- (id)charactersForCategoryIndex:(long long)arg1;
- (id)categoryImageForCategoryIndex:(long long)arg1;
- (id)categoryNameForCategoryIndex:(long long)arg1;
- (long long)categoryCount;
- (void)dealloc;
- (id)init;

@end

