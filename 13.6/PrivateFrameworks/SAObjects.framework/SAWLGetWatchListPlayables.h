//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand
{
}

+ (id)getWatchListPlayablesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getWatchListPlayables;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *statsId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

