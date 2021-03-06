//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUICommonViewController.h>

#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>

@class AMSUIErrorView, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebErrorPageModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter>
{
    _Bool _showingCancelButton;
    AMSUIWebAppearance *_appearance;
    AMSUIWebClientContext *_context;
    AMSUIErrorView *_errorView;
    AMSUIWebErrorPageModel *_model;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showingCancelButton; // @synthesize showingCancelButton=_showingCancelButton;
@property(retain, nonatomic) AMSUIWebErrorPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
- (void)_showCancelButtonIfNeeded;
- (void)_applyAppearance;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

