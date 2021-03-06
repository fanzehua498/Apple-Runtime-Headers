//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton;
@protocol AggregatedPasswordsAuditingTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface AggregatedPasswordsAuditingTableCellView : NSTableCellView
{
    BOOL _showsAuditingButton;
    id <AggregatedPasswordsAuditingTableCellViewDelegate> _delegate;
    NSButton *_auditingButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSButton *auditingButton; // @synthesize auditingButton=_auditingButton;
@property(nonatomic, getter=isShowingAuditingButton) BOOL showsAuditingButton; // @synthesize showsAuditingButton=_showsAuditingButton;
@property(nonatomic) __weak id <AggregatedPasswordsAuditingTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buttonWasClicked:(id)arg1;
- (void)awakeFromNib;

@end

