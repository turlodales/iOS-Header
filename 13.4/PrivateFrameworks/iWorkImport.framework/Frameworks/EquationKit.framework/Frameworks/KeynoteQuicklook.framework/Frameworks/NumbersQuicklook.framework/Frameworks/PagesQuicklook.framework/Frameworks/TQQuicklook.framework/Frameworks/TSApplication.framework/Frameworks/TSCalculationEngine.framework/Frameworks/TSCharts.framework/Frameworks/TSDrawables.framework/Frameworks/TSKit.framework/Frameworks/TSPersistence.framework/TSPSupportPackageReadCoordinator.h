//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPPackageReadCoordinator.h>

@class NSObject, TSPPackage;
@protocol OS_dispatch_queue;

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator
{
    TSPPackage *_documentPackage;
    NSObject<OS_dispatch_queue> *_documentComponentReadQueue;
}

- (void).cxx_destruct;
- (long long)metadataObjectIdentifier;
- (void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)endReading;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(_Bool)arg5 skipDocumentUpgrade:(_Bool)arg6 archiveValidationMode:(long long)arg7 documentPackage:(id)arg8;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(_Bool)arg5 skipDocumentUpgrade:(_Bool)arg6 archiveValidationMode:(long long)arg7;

@end

