//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class IMTranscriptPluginChatItem, NSArray, NSString, UIView, UIViewController;
@protocol CKTranscriptBalloonPluginController, CKTranscriptPluginView;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem
{
    _Bool _isAppearing;
    _Bool _isHandwriting;
    _Bool _isBusiness;
    id <CKTranscriptBalloonPluginController> _balloonController;
    IMTranscriptPluginChatItem *_imTranscriptPluginChatItem;
    NSString *_conversationID;
    NSArray *_recipients;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBusiness; // @synthesize isBusiness=_isBusiness;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) _Bool isHandwriting; // @synthesize isHandwriting=_isHandwriting;
@property(retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem; // @synthesize imTranscriptPluginChatItem=_imTranscriptPluginChatItem;
@property(nonatomic) __weak id <CKTranscriptBalloonPluginController> balloonController; // @synthesize balloonController=_balloonController;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
- (void)performHostAppResume;
- (void)releaseBalloonControllerIfNeeded;
- (void)relinquishBalloonController;
@property(readonly, nonatomic) _Bool isSaved;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool wantsTranscriptGroupMonograms;
@property(readonly, nonatomic) _Bool wantsOutline;
@property(readonly, nonatomic) _Bool wantsBalloonGradient;
@property(readonly, nonatomic) _Bool isInteractive;
- (struct UIEdgeInsets)contentInsets;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (void)pluginContentViewDidDisappear;
- (void)pluginContentViewWillDisappear;
- (void)pluginContentViewWillAppear;
- (_Bool)wantsDrawerLayout;
- (BOOL)transcriptOrientation;
- (id)snapshotGUIDForPluginPayload:(id)arg1;
- (struct UIEdgeInsets)textAlignmentInsets;
- (_Bool)shouldSnapshot;
- (Class)balloonViewClass;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)contact;
- (id)sender;
- (id)pasteboardItems;
- (id)pluginDisplayContainer;
- (id)message;
- (id)menuTitle;
- (_Bool)canForward;
- (_Bool)canCopy;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (_Bool)handlePresentationAction;
- (void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3;
- (void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(_Bool)arg4;
- (void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(_Bool)arg3;
@property(readonly, nonatomic) UIViewController *contentViewController;
@property(readonly, nonatomic) UIViewController *extensibleViewController;
@property(readonly, nonatomic) UIView<CKTranscriptPluginView> *extensableView;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (id)composition;

// Remaining properties
@property(readonly, nonatomic) IMTranscriptPluginChatItem *IMChatItem; // @dynamic IMChatItem;

@end

