//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation
{
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}

- (id)_setupSAPWithData:(id)arg1 error:(id *)arg2;
- (id)_setupSAPCertificate:(id *)arg1;
- (_Bool)_isMescalEnabled;
- (void)run;
@property(readonly) SUMescalSession *mescalSession;
- (void)dealloc;
- (id)initWithURLRequestProperties:(id)arg1;

@end

