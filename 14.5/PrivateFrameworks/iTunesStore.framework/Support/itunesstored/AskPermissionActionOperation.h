//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSURL, SSAccount;

@interface AskPermissionActionOperation : ISOperation
{
    SSAccount *_account;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) SSAccount *account; // @synthesize account=_account;
- (void)run;
- (id)initWithURL:(id)arg1 account:(id)arg2;

@end

