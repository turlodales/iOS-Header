//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSError, PBCodable;

@protocol GEOProtobufSessionTaskDelegate <NSObject>
- (void)protobufSession:(GEOProtobufSession *)arg1 didCompleteTask:(GEOProtobufSessionTask *)arg2;

@optional
- (NSError *)protobufSession:(GEOProtobufSession *)arg1 validateResponse:(PBCodable *)arg2;
- (void)protobufSession:(GEOProtobufSession *)arg1 willSendRequestForTask:(GEOProtobufSessionTask *)arg2 completionHandler:(void (^)(PBRequest *))arg3;
@end

