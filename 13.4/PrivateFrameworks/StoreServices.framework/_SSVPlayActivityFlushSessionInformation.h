//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _SSVPlayActivityFlushSessionInformation : NSObject
{
    NSString *_endpointIdentifier;
    NSIndexSet *_revisionsIndexSet;
    NSString *_revisionVersionToken;
    unsigned long long _sessionToken;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *revisionVersionToken; // @synthesize revisionVersionToken=_revisionVersionToken;
@property(retain, nonatomic) NSIndexSet *revisionsIndexSet; // @synthesize revisionsIndexSet=_revisionsIndexSet;
@property(copy, nonatomic) NSString *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;

@end

