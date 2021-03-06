//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAPortalLayer;

@interface SBPortalView : UIView
{
    UIView *_sourceView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) CAPortalLayer *portalLayer; // @dynamic portalLayer;
- (id)description;
@property(nonatomic) _Bool allowsBackdropGroups; // @dynamic allowsBackdropGroups;
@property(nonatomic) _Bool matchesPosition; // @dynamic matchesPosition;
@property(nonatomic) _Bool matchesTransform; // @dynamic matchesTransform;
@property(nonatomic) _Bool matchesAlpha; // @dynamic matchesAlpha;
@property(nonatomic) _Bool hidesSourceView; // @dynamic hidesSourceView;

@end

