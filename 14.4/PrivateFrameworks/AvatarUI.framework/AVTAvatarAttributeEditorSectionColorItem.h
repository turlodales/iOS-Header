//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionItem-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorSectionItemInternal-Protocol.h>

@class AVTColorPreset, AVTCoreModelColor, NSString;

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTAvatarAttributeEditorSectionItem>
{
    _Bool _selected;
    _Bool _hasDerivedColorDependency;
    NSString *_identifier;
    NSString *_localizedName;
    CDUnknownBlockType _avatarUpdater;
    AVTCoreModelColor *_color;
    CDUnknownBlockType _layerContentProvider;
    CDUnknownBlockType _gradientProvider;
    AVTColorPreset *_skinColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasDerivedColorDependency; // @synthesize hasDerivedColorDependency=_hasDerivedColorDependency;
@property(readonly, nonatomic) AVTColorPreset *skinColor; // @synthesize skinColor=_skinColor;
@property(readonly, copy, nonatomic) CDUnknownBlockType gradientProvider; // @synthesize gradientProvider=_gradientProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType layerContentProvider; // @synthesize layerContentProvider=_layerContentProvider;
@property(readonly, nonatomic) AVTCoreModelColor *color; // @synthesize color=_color;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) CDUnknownBlockType avatarUpdater; // @synthesize avatarUpdater=_avatarUpdater;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)colorPreset;
@property(readonly, copy) NSString *description;
- (id)initWithColor:(id)arg1 skinColor:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 avatarUpdater:(CDUnknownBlockType)arg5 derivedColorDependent:(_Bool)arg6 selected:(_Bool)arg7;
- (id)initWithColor:(id)arg1 imageProvider:(id)arg2 colorLayerProvider:(id)arg3 avatarUpdater:(CDUnknownBlockType)arg4 derivedColorDependent:(_Bool)arg5 selected:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

