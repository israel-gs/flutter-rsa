// Objective-C API for talking to github.com/jerson/rsa-mobile/rsa Go package.
//   gobind -lang=objc github.com/jerson/rsa-mobile/rsa
//
// File is generated by gobind. Do not edit.

#ifndef __Rsa_H__
#define __Rsa_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class RsaFastRSA;
@class RsaKeyPair;

@interface RsaFastRSA : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init;
- (NSString* _Nonnull)base64:(NSString* _Nullable)message error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)decryptOAEP:(NSString* _Nullable)ciphertext label:(NSString* _Nullable)label hashName:(NSString* _Nullable)hashName pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)decryptPKCS1v15:(NSString* _Nullable)ciphertext pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)encryptOAEP:(NSString* _Nullable)message label:(NSString* _Nullable)label hashName:(NSString* _Nullable)hashName pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)encryptPKCS1v15:(NSString* _Nullable)message pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase error:(NSError* _Nullable* _Nullable)error;
- (RsaKeyPair* _Nullable)generate:(long)nBits error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)hash:(NSString* _Nullable)message name:(NSString* _Nullable)name error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)signPKCS1v15:(NSString* _Nullable)message hashName:(NSString* _Nullable)hashName pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase error:(NSError* _Nullable* _Nullable)error;
- (NSString* _Nonnull)signPSS:(NSString* _Nullable)message hashName:(NSString* _Nullable)hashName pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase error:(NSError* _Nullable* _Nullable)error;
- (BOOL)verifyPKCS1v15:(NSString* _Nullable)signature message:(NSString* _Nullable)message hashName:(NSString* _Nullable)hashName pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase ret0_:(BOOL* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
- (BOOL)verifyPSS:(NSString* _Nullable)signature message:(NSString* _Nullable)message hashName:(NSString* _Nullable)hashName pkcs12:(NSString* _Nullable)pkcs12 passphrase:(NSString* _Nullable)passphrase ret0_:(BOOL* _Nullable)ret0_ error:(NSError* _Nullable* _Nullable)error;
@end

@interface RsaKeyPair : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull publicKey;
@property (nonatomic) NSString* _Nonnull privateKey;
@end

FOUNDATION_EXPORT RsaFastRSA* _Nullable RsaNewFastRSA(void);

#endif
