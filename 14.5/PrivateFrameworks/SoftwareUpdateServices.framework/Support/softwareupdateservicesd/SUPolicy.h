//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SUPolicy : NSObject
{
    NSDictionary *_additionalOptions;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSDictionary *additionalOptions; // @synthesize additionalOptions=_additionalOptions;
- (id)description;
- (id)_stringForBool:(_Bool)arg1;
@property(readonly, nonatomic) _Bool deviceIsSupervised;
@property(readonly, nonatomic) _Bool skipPhase;
@property(readonly, nonatomic) int downloadTimeoutSecs;
@property(readonly, nonatomic) _Bool requiresPowerPluggedIn;
@property(readonly, nonatomic) _Bool allowExpensiveNetwork;
@property(readonly, nonatomic) _Bool allowsCellular;
@property(readonly, nonatomic) _Bool discretionary;

@end

