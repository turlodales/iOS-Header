//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@protocol CKAdaptivePresentedControllerProtocol <NSObject>
@property(nonatomic) _Bool preserveModalPresentationStyle;
@property(nonatomic) _Bool wantsWindowedPresentation;

@optional
@property(nonatomic) _Bool shouldHidePresentingWindow;
- (_Bool)forceWindowedPresentation;
- (_Bool)constrainToPresentingVCBounds;
@end

