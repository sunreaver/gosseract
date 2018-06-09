#ifdef __cplusplus
extern "C" {
#endif

typedef void* TessBaseAPI;
typedef void* PixImage;

TessBaseAPI Create(void);
void Free(TessBaseAPI);
void Clear(TessBaseAPI);
void ClearPersistentCache(TessBaseAPI);
int Init(TessBaseAPI, char*, char*, char*);
bool SetVariable(TessBaseAPI, char*, char*);
PixImage SetImage(TessBaseAPI, char*);
PixImage SetImageFromBuffer(TessBaseAPI, unsigned char*, int);
void SetPixImage(TessBaseAPI a, PixImage pix);
void SetPageSegMode(TessBaseAPI, int);
int GetPageSegMode(TessBaseAPI);
char* UTF8Text(TessBaseAPI);
char* HOCRText(TessBaseAPI);
const char* Version(TessBaseAPI);

void DestroyPixImage(PixImage pix);

#ifdef __cplusplus
}
#endif/* extern "C" */
