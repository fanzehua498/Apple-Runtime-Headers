//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSMutableDictionary, NSString, OKWidgetSceneKitView, SCNMaterial;

@interface OKWidgetSceneKitMaterialProxy : NSObject <OKSettingsSupport>
{
    SCNMaterial *_material;
    OKWidgetSceneKitView *_widgetScene;
    NSMutableDictionary *_materialPropertiesToApply;
}

+ (id)supportedSettings;
+ (id)proxyForMaterial:(id)arg1 widgetScene:(id)arg2;
@property(readonly, retain, nonatomic) SCNMaterial *material; // @synthesize material=_material;
- (void)setSettingWritesToDepthBuffer:(BOOL)arg1;
- (BOOL)settingWritesToDepthBuffer;
- (void)setSettingTransparent:(id)arg1;
- (id)settingTransparent;
- (void)setSettingTransparencyMode:(long long)arg1;
- (long long)settingTransparencyMode;
- (void)setSettingTransparency:(double)arg1;
- (double)settingTransparency;
- (void)setSettingSpecular:(id)arg1;
- (id)settingSpecular;
- (void)setSettingShininess:(double)arg1;
- (double)settingShininess;
- (void)setSettingReflective:(id)arg1;
- (id)settingReflective;
- (void)setSettingNormal:(id)arg1;
- (id)settingNormal;
- (void)setSettingName:(id)arg1;
- (id)settingName;
- (void)setSettingMultiply:(id)arg1;
- (id)settingMultiply;
- (void)setSettingLocksAmbientWithDiffuse:(BOOL)arg1;
- (BOOL)settingLocksAmbientWithDiffuse;
- (void)setSettingLitPerPixel:(BOOL)arg1;
- (BOOL)settingLitPerPixel;
- (void)setSettingLightingModelName:(id)arg1;
- (id)settingLightingModelName;
- (void)setSettingEmission:(id)arg1;
- (id)settingEmission;
- (void)setSettingDoubleSided:(BOOL)arg1;
- (BOOL)settingDoubleSided;
- (void)setSettingDiffuse:(id)arg1;
- (id)settingDiffuse;
- (void)setSettingAmbient:(id)arg1;
- (id)settingAmbient;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)loadMaterialProperties;
- (void)dealloc;
- (id)initWithMaterial:(id)arg1 widgetScene:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

