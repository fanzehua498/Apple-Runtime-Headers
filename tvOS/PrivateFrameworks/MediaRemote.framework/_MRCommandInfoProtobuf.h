//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _preferredIntervals;
    CDStruct_95bda58d _supportedInsertionPositions;
    CDStruct_95bda58d _supportedPlaybackQueueTypes;
    CDStruct_95bda58d _supportedQueueEndActions;
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedRates;
    int _canScrub;
    int _command;
    NSMutableArray *_currentPlaybackSessionTypes;
    int _currentQueueEndAction;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    int _numAvailableSkips;
    NSString *_playbackSessionIdentifier;
    float _preferredPlaybackRate;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    int _skipFrequency;
    int _skipInterval;
    NSMutableArray *_supportedCustomQueueIdentifiers;
    NSMutableArray *_supportedPlaybackSessionTypes;
    int _upNextItemCount;
    _Bool _active;
    _Bool _enabled;
    _Bool _supportsSharedQueue;
    struct {
        unsigned int canScrub:1;
        unsigned int command:1;
        unsigned int currentQueueEndAction:1;
        unsigned int maximumRating:1;
        unsigned int minimumRating:1;
        unsigned int numAvailableSkips:1;
        unsigned int preferredPlaybackRate:1;
        unsigned int presentationStyle:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int skipFrequency:1;
        unsigned int skipInterval:1;
        unsigned int upNextItemCount:1;
        unsigned int active:1;
        unsigned int enabled:1;
        unsigned int supportsSharedQueue:1;
    } _has;
}

+ (Class)currentPlaybackSessionTypesType;
+ (Class)supportedPlaybackSessionTypesType;
+ (Class)supportedCustomQueueIdentifierType;
- (void).cxx_destruct;
@property(nonatomic) int currentQueueEndAction; // @synthesize currentQueueEndAction=_currentQueueEndAction;
@property(retain, nonatomic) NSString *playbackSessionIdentifier; // @synthesize playbackSessionIdentifier=_playbackSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *currentPlaybackSessionTypes; // @synthesize currentPlaybackSessionTypes=_currentPlaybackSessionTypes;
@property(retain, nonatomic) NSMutableArray *supportedPlaybackSessionTypes; // @synthesize supportedPlaybackSessionTypes=_supportedPlaybackSessionTypes;
@property(nonatomic) float preferredPlaybackRate; // @synthesize preferredPlaybackRate=_preferredPlaybackRate;
@property(nonatomic) int upNextItemCount; // @synthesize upNextItemCount=_upNextItemCount;
@property(nonatomic) _Bool supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(retain, nonatomic) NSMutableArray *supportedCustomQueueIdentifiers; // @synthesize supportedCustomQueueIdentifiers=_supportedCustomQueueIdentifiers;
@property(nonatomic) int canScrub; // @synthesize canScrub=_canScrub;
@property(nonatomic) int skipFrequency; // @synthesize skipFrequency=_skipFrequency;
@property(nonatomic) int numAvailableSkips; // @synthesize numAvailableSkips=_numAvailableSkips;
@property(nonatomic) int skipInterval; // @synthesize skipInterval=_skipInterval;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) float maximumRating; // @synthesize maximumRating=_maximumRating;
@property(nonatomic) float minimumRating; // @synthesize minimumRating=_minimumRating;
@property(retain, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setSupportedQueueEndActions:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedQueueEndActionsAtIndex:(unsigned long long)arg1;
- (void)addSupportedQueueEndActions:(int)arg1;
- (void)clearSupportedQueueEndActions;
@property(readonly, nonatomic) int *supportedQueueEndActions;
@property(readonly, nonatomic) unsigned long long supportedQueueEndActionsCount;
@property(nonatomic) _Bool hasCurrentQueueEndAction;
@property(readonly, nonatomic) _Bool hasPlaybackSessionIdentifier;
- (id)currentPlaybackSessionTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentPlaybackSessionTypesCount;
- (void)addCurrentPlaybackSessionTypes:(id)arg1;
- (void)clearCurrentPlaybackSessionTypes;
- (id)supportedPlaybackSessionTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedPlaybackSessionTypesCount;
- (void)addSupportedPlaybackSessionTypes:(id)arg1;
- (void)clearSupportedPlaybackSessionTypes;
@property(nonatomic) _Bool hasPreferredPlaybackRate;
@property(nonatomic) _Bool hasUpNextItemCount;
@property(nonatomic) _Bool hasSupportsSharedQueue;
- (void)setSupportedInsertionPositions:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedInsertionPositionsAtIndex:(unsigned long long)arg1;
- (void)addSupportedInsertionPositions:(int)arg1;
- (void)clearSupportedInsertionPositions;
@property(readonly, nonatomic) int *supportedInsertionPositions;
@property(readonly, nonatomic) unsigned long long supportedInsertionPositionsCount;
- (id)supportedCustomQueueIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCustomQueueIdentifiersCount;
- (void)addSupportedCustomQueueIdentifier:(id)arg1;
- (void)clearSupportedCustomQueueIdentifiers;
- (void)setSupportedPlaybackQueueTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedPlaybackQueueTypesAtIndex:(unsigned long long)arg1;
- (void)addSupportedPlaybackQueueTypes:(int)arg1;
- (void)clearSupportedPlaybackQueueTypes;
@property(readonly, nonatomic) int *supportedPlaybackQueueTypes;
@property(readonly, nonatomic) unsigned long long supportedPlaybackQueueTypesCount;
@property(nonatomic) _Bool hasCanScrub;
@property(nonatomic) _Bool hasSkipFrequency;
@property(nonatomic) _Bool hasNumAvailableSkips;
@property(nonatomic) _Bool hasSkipInterval;
@property(nonatomic) _Bool hasPresentationStyle;
- (int)StringAsShuffleMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
@property(nonatomic) _Bool hasShuffleMode;
@property(nonatomic) int shuffleMode; // @synthesize shuffleMode=_shuffleMode;
- (int)StringAsRepeatMode:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
@property(nonatomic) _Bool hasRepeatMode;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=_repeatMode;
- (void)setSupportedRates:(float *)arg1 count:(unsigned long long)arg2;
- (float)supportedRateAtIndex:(unsigned long long)arg1;
- (void)addSupportedRate:(float)arg1;
- (void)clearSupportedRates;
@property(readonly, nonatomic) float *supportedRates;
@property(readonly, nonatomic) unsigned long long supportedRatesCount;
@property(nonatomic) _Bool hasMaximumRating;
@property(nonatomic) _Bool hasMinimumRating;
@property(readonly, nonatomic) _Bool hasLocalizedShortTitle;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
- (void)setPreferredIntervals:(double *)arg1 count:(unsigned long long)arg2;
- (double)preferredIntervalAtIndex:(unsigned long long)arg1;
- (void)addPreferredInterval:(double)arg1;
- (void)clearPreferredIntervals;
@property(readonly, nonatomic) double *preferredIntervals;
@property(readonly, nonatomic) unsigned long long preferredIntervalsCount;
@property(nonatomic) _Bool hasActive;
@property(nonatomic) _Bool hasEnabled;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) _Bool hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;
- (void)dealloc;

@end

