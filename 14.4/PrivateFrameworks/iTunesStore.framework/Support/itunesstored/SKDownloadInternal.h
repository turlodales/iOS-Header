//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownloadInternal : NSObject
{
    NSNumber *_downloadID;
    NSString *_productID;
    long long _state;
    float _progress;
    NSError *_error;
    NSURL *_contentURL;
    double _timeRemaining;
    NSNumber *_contentLength;
    NSString *_contentVersion;
    SKPaymentTransaction *_transaction;
}

- (void).cxx_destruct;

@end

