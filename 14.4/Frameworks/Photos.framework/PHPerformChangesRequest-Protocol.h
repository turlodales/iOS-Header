//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@protocol PHDeleteChangeRequest, PHInsertChangeRequest, PHUpdateChangeRequest;

@protocol PHPerformChangesRequest <NSObject>
- (void)recordDeleteRequest:(id <PHDeleteChangeRequest>)arg1;
- (void)recordUpdateRequest:(id <PHUpdateChangeRequest>)arg1;
- (void)recordInsertRequest:(id <PHInsertChangeRequest>)arg1;
@end

