//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue
{
    DAMailAccount *_account;
    NSString *_folderID;
}

- (void).cxx_destruct;
- (_Bool)processRequests:(id)arg1;
- (id)filterRequests:(id)arg1;
- (id)initWithAccount:(id)arg1 folderID:(id)arg2;

@end

