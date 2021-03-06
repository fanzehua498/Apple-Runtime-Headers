//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponent.h>

@protocol WFComponentNavigationContext;

@interface WFTagFieldComponent : CKStatefulViewComponent
{
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    id <WFComponentNavigationContext> _navigationContext;
    struct WFTagFieldAttributes _attributes;
}

+ (id)newWithAttributes:(const struct WFTagFieldAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 variableBlock:(CDUnknownBlockType)arg3 navigationContext:(id)arg4 size:(const struct CKComponentSize *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) struct WFTagFieldAttributes attributes; // @synthesize attributes=_attributes;

@end

