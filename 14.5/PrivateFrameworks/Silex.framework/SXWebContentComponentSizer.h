//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

@protocol SWLoadingPolicyProvider;

@interface SXWebContentComponentSizer : SXComponentSizer
{
    id <SWLoadingPolicyProvider> _loadingPolicyProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWLoadingPolicyProvider> loadingPolicyProvider; // @synthesize loadingPolicyProvider=_loadingPolicyProvider;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 loadingPolicyProvider:(id)arg6;

@end

