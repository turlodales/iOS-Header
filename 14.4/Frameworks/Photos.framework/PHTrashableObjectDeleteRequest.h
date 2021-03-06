//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObjectDeleteRequest.h>

@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest
{
    _Bool _clientEntitledToExpunge;
    long long _operation;
}

+ (id)deleteRequestForObject:(id)arg1 operation:(long long)arg2;
+ (id)deleteRequestForObject:(id)arg1;
@property(readonly, nonatomic, getter=isClientEntitledToExpunge) _Bool clientEntitledToExpunge; // @synthesize clientEntitledToExpunge=_clientEntitledToExpunge;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 operation:(long long)arg3;

@end

