//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDCallAction.h>

@class TUCallProvider;

__attribute__((visibility("hidden")))
@interface DDCallKitAction : DDCallAction
{
    TUCallProvider *_callProvider;
}

+ (id)callKitProviders;
+ (_Bool)hostApplicationIsEntitled;
- (void).cxx_destruct;
@property(retain) TUCallProvider *callProvider; // @synthesize callProvider=_callProvider;
- (id)dialRequest;
- (id)localizedName;
- (long long)TTYType;

@end

