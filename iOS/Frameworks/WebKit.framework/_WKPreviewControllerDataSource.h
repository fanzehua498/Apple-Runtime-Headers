//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/ARQuickLookWebKitItemDelegate-Protocol.h>
#import <WebKit/QLPreviewControllerDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource, ARQuickLookWebKitItemDelegate>
{
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<ARQuickLookWebKitItem> _item;
    struct URL _originatingPageURL;
    struct URL _downloadedURL;
    struct SystemPreviewController *_previewController;
    CDUnknownBlockType _completionHandler;
    NSString *_mimeType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)previewItem:(id)arg1 didReceiveMessage:(id)arg2;
- (void)failWithError:(id)arg1;
- (void)finish:(struct URL)arg1;
- (void)setProgress:(float)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)dealloc;
- (id)initWithSystemPreviewController:(struct SystemPreviewController *)arg1 MIMEType:(id)arg2 originatingPageURL:(struct URL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

