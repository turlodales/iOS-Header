//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject
{
    CRKIdentityConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)arg1;
- (void)addClientAndServerAuthEKUsToParameters:(id)arg1;
- (id)certificateParametersWithCMSAlgorithm:(const void *)arg1;
- (id)keyParameters;
- (id)subject;
- (void)safeRelease:(void *)arg1;
- (struct __SecIdentity *)makeIdentityRefWithError:(id *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

