//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICanvasDefinition.h>

@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition
{
    UISceneSession *_sceneSession;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)userInfo;
- (id)stateRestorationActivity;
- (id)persistentIdentifier;
- (id)configuration;
- (id)role;
- (id)scene;
@property(retain, nonatomic) Class delegateClass; // @dynamic delegateClass;
@property(retain, nonatomic) Class canvasSubclass; // @dynamic canvasSubclass;
- (long long)systemType;
- (id)representedCanvas;
- (void)setUserInfo:(id)arg1;
- (id)initWithRepresentation:(id)arg1;

@end

