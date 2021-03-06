//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKComponent.h>

@class WFActivityIndicatorComponent;

@interface WFLoadableDataComponent : CKComponent
{
    WFActivityIndicatorComponent *_loadingComponent;
    _Bool _isLoading;
    CKComponent *_controlComponent;
}

+ (id)newWithLoading:(_Bool)arg1 controlComponent:(id)arg2 size:(const struct CKComponentSize *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKComponent *controlComponent; // @synthesize controlComponent=_controlComponent;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

